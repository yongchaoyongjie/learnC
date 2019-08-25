#pragma once
enum Colour
{
	RED,
	BLACK
};
template<class k,v>
struct rbtreenode{
	rbtreenode* _left;
	rbtreenode* _right;
	rbtreenode* _parent;
	pair<k, v> _kv;
	Colour _col;

};
template<class K,class V>
class rbtree{
	typedef rbtreenode<K, V>node;
public:
	bool Insert(const pair<K, V>&kv){
		if (_root == nullptr){
			//如果为空新插入结点
			 _root = new node(kv);
			 _root->_col = BLACK;
			 return true;
		}
		node*parent = nullptr;
		node*cur = _root;
		while (cur){
			if (cur->_kv.first < kv.first){
				//插入的值大于root;
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first>kv.first){
				parent = cur;
				cur = cur->_left;
			}
			else{
				return false;
			}

		}
		//建立插入关系以后进行插入新结点
		cur = new node(kv);
		cur->_col = RED;//插入的新结点是红色的
		if (parent->_kv.first < kv.first){
//如果插入的新结点比parent大则插入的新结点在parent右边
			parent->_right = cur;//parent右边变成了cur;cur->parent变成了parent
			cur->_parent = parent;
			/*cur = parent->_right;
			parent = cur->_parent;*///
			//是错的cur的值变了
		
		}
		else {
			parent->_left = cur;
			cur->_parent = parent;
		}
		while (parent&&parent->_col = RED){
			//当父亲为红色,
			node*gradparent = parent->_parent;
			if (parent = gradparent->_left){
				node*uncle = gradparent->_right;
				if (uncle&&uncle->_col== RED){
					//叔叔存在而且为红色
					parent->_col = BLACK;
					uncle->_col = BLACK;
					gradparent->_col = RED;
					//继续向上调整
					cur = gradparent;
					gradparent = cur->_parent;

				}
				else{
					//叔叔为空或者是黑色
					if (cur = parent->_right){
						zuoxuan(parent);
						swap(parent, cur);
					}
					youxuan(gradparent);
					parent->_col = BLACK;
					gradparent->_col = RED;
					break;

				}
				
			}
			else{
				//parent = gradparent->_right

			}
		}
		//最后把根变成黑色
		_root->_col = BLACK;
		return true;
	}
	void zuoxuan(node*parent){
		node*subr = parent->_right;
		node*subrl = subr->_left;
		parent->_right = subr;
		if (subrl){
			subrl->_parent = subr;
			subr->_left = parent;
		}
			node*pparent = parent->_parent;
			if (parent==_root){
				_root = subr;
				_root->_parent = nullptr;
			}
			else{
				if (pparent->_left == parent){
					pparent->_left =subr ;
				}
				else{
					pparent->_right = subr;
				}
				subr->_parent = pparent;
			}
	}
	void youxuan(node*parent){
		Node* subl = parent->_left;
		Node* sublr = subr->_right;

		parent->_left = sublr;
		if (sublr)
			sublr->_parent = parent;

		subL->_right = parent;

		Node* pparent = parent->_parent;
		parent->_parent = subL;

		if (pparent == nullptr)
		{
			_root = subl;
			_root->_parent = nullptr;
		}
		else
		{
			if (pparent->_left == parent)
			{
				pparent->_left = subl;
			}
			else
			{
				pparent->_right = subl;
			}

			subl->_parent = pparent;
		}
	}
private:
	node* _root = nullptr;
};
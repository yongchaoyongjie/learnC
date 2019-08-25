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
			//���Ϊ���²�����
			 _root = new node(kv);
			 _root->_col = BLACK;
			 return true;
		}
		node*parent = nullptr;
		node*cur = _root;
		while (cur){
			if (cur->_kv.first < kv.first){
				//�����ֵ����root;
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
		//���������ϵ�Ժ���в����½��
		cur = new node(kv);
		cur->_col = RED;//������½���Ǻ�ɫ��
		if (parent->_kv.first < kv.first){
//���������½���parent���������½����parent�ұ�
			parent->_right = cur;//parent�ұ߱����cur;cur->parent�����parent
			cur->_parent = parent;
			/*cur = parent->_right;
			parent = cur->_parent;*///
			//�Ǵ��cur��ֵ����
		
		}
		else {
			parent->_left = cur;
			cur->_parent = parent;
		}
		while (parent&&parent->_col = RED){
			//������Ϊ��ɫ,
			node*gradparent = parent->_parent;
			if (parent = gradparent->_left){
				node*uncle = gradparent->_right;
				if (uncle&&uncle->_col== RED){
					//������ڶ���Ϊ��ɫ
					parent->_col = BLACK;
					uncle->_col = BLACK;
					gradparent->_col = RED;
					//�������ϵ���
					cur = gradparent;
					gradparent = cur->_parent;

				}
				else{
					//����Ϊ�ջ����Ǻ�ɫ
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
		//���Ѹ���ɺ�ɫ
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
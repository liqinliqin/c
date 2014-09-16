enum BalanceFactor{
	LH("左子树高"),EH("左右等高"),RH("右子树高");
	private String illustration="";
	private BalanceFactor(String s){
		this.illustration=s;
	}
	public String toString(){
		return this.illustration;
	}
}

class AVLNode<E extends Comparable<E>>{
	E key = null;
	BalanceFactor bFactor = BalanceFactor.EH;
	AVLNode<E> parent = null;
	AVLNode<E> lchild,rchild = null;
	public AVLNode(E key){
		this.key=key;
	}
}

public class AVL<E extends Comparable<E>>{
	private AVL<E> root = null;
	public boolean isTaller = false;
	public AVL(){
	}

	public boolean insert(E key){
		System.out.println("insert key:"+key);
		if(key==null)
			return false;
		if(root==null)
		{
			root = new AVLNode<E>(key);
			return true;
		}else
			return insertAVL(root,key); 
	}
	//cannot one more nodes voliate the avl at the same time
	//pay attention , the isTaller is public,all nodes in the path share the variable;
	public boolean insertAVL(AVLNode node,E key){
		if(node.key.compareTo(key)==0){
			System.out.println("key comflict");
			return false;
		}else if(node.key.compareTo(key)>0){
			if(node.lchild==null)
			{
				AVLNode<E> temp = new AVLNode<E>(key);
				node.lchild = temp;
				temp.parent = node;
				isTaller = true;
			}
			else{
				insertAVL(node.lchild,key);
			}
			if(isTaller){
				switch(node.bFactor){
					case LH:{
						
					}
					case EH:{
					}
					case RH:{
					}
				}
			}
		}
	}
}







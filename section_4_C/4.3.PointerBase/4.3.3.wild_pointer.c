#include <stdio.h>

int main(void)
{
	int a;
	int *p = NULL;
	// �м�ʡ��400�д��롤����������
	//p = (int *)4;			// 4��ַ������ȷ�����Է��ʵģ��Ͳ�Ҫ��ָ��ȥ������
	
	p = &a;			// ��ȷ��ʹ��ָ��ķ�ʽ���ǽ�����ָ��ǰ��һ�����Կ��õĵ�ַ��

	//if (p != NULL)
	if (NULL != p)
	{
		*p = 4;
	}
	p = NULL;		// ʹ����ָ������󣬼ǵý������¸�ֵΪNULL
	
/*
	int *p;		// �ֲ�������������ջ�ϣ�ջ������ʹ�ã�����ֵ�������
	
	//printf("p = %p.\n",p);
	*p = 4;		// Segmentation fault (core dumped)����ʱ�δ���ԭ��ΪҰָ��
*/
	
	return 0;
}



























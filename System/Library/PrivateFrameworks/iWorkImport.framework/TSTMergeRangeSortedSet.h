/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> >* mSet;
	tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long>* mIter;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(UIEdgeInsets)getPaddingInsets;
-(void)addRange:(TSUColumnRowRect)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4 ;
-(BOOL)isCheckbox;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)reset;
-(TSUColumnRowRect)begin;
-(TSUColumnRowRect)iter;
-(CGSize)getSize;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

@interface UIKBCandidateCollectionView : UICollectionView

@property (nonatomic,readonly) NSIndexPath * selectedItemIndexPath; 
-(void)configureAsCandidatesBar;
-(NSIndexPath *)selectedItemIndexPath;
-(BOOL)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
@end

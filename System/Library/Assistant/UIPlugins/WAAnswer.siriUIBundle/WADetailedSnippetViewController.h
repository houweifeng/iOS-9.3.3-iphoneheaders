/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <WAAnswer/WAAttributionViewDelegate.h>

@class UICollectionView, UICollectionViewFlowLayout, NSMutableArray, SAAnswerSnippet, NSString;

@interface WADetailedSnippetViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAAttributionViewDelegate> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSMutableArray* _answerViews;

}

@property (nonatomic,retain) SAAnswerSnippet * snippet; 
@property (nonatomic,retain) UICollectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_blendedImageFromImage:(id)arg1 ;
-(id)initWithAnswerSnippet:(id)arg1 ;
-(void)attributionViewTapped:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)wasAddedToTranscript;
@end


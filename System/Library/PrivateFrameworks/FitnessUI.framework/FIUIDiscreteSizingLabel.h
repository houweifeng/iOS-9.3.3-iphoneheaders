/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;
@interface FIUIDiscreteSizingLabel : UILabel {

	id<FIUIDiscreteSizingLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIUIDiscreteSizingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FIUIDiscreteSizingLabelDelegate>)arg1 ;
-(id<FIUIDiscreteSizingLabelDelegate>)delegate;
-(void)setText:(id)arg1 ;
@end


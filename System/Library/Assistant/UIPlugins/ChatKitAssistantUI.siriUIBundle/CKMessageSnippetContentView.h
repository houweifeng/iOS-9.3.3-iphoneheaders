/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/ChatKitAssistantUI.siriUIBundle/ChatKitAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitAssistantUI/ChatKitAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CKTextBalloonView, CKGradientReferenceView;

@interface CKMessageSnippetContentView : UIView {

	UILabel* _toLabel;
	CKTextBalloonView* _balloonImageView;
	CKGradientReferenceView* _gradientRefView;
	int _balloonType;

}
-(void)setBalloonType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMessageBody:(id)arg1 ;
-(void)setToField:(id)arg1 ;
@end

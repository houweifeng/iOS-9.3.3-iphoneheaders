/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKTranscriptManagementNameFieldDelegate;
@class UILabel, UITextField, UIView, _UIBackdropView, NSString;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate> {

	BOOL _isOverlay;
	BOOL _enabled;
	id<CKTranscriptManagementNameFieldDelegate> _delegate;
	UILabel* _fieldLabel;
	UITextField* _textField;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) id<CKTranscriptManagementNameFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) BOOL isOverlay;                                                    //@synthesize isOverlay=_isOverlay - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UILabel * fieldLabel;                                              //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                           //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * topSeparator;                                             //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                          //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                    //@synthesize backdropView=_backdropView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKTranscriptManagementNameFieldDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<CKTranscriptManagementNameFieldDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)setGroupName:(NSString *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)groupName;
-(UITextField *)textField;
-(void)setFieldLabel:(UILabel *)arg1 ;
-(void)commitGroupName;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setTextField:(UITextField *)arg1 ;
-(UILabel *)fieldLabel;
-(BOOL)isOverlay;
-(void)setIsOverlay:(BOOL)arg1 ;
@end

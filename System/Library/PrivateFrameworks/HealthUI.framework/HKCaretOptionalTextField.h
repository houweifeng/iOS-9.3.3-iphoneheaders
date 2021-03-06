/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UITextField.h>

@interface HKCaretOptionalTextField : UITextField {

	BOOL _allowsSelection;

}

@property (assign,nonatomic) BOOL allowsSelection;              //@synthesize allowsSelection=_allowsSelection - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)allowsSelection;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(double)actualMinimumFontSize;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextView;

@interface SPUISearchWikiRowCell : UITableViewCell {

	UILabel* _labelLabel;
	UITextView* _valueTextView;

}

@property (assign) UILabel * labelLabel;                    //@synthesize labelLabel=_labelLabel - In the implementation block
@property (assign) UITextView * valueTextView;              //@synthesize valueTextView=_valueTextView - In the implementation block
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)awakeFromNib;
-(UILabel *)labelLabel;
-(UITextView *)valueTextView;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(void)setValueTextView:(UITextView *)arg1 ;
@end


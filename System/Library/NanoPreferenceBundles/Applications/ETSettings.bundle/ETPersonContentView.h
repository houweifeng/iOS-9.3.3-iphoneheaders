/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIImage, NSString;

@interface ETPersonContentView : UIView {

	UILabel* _label;
	UIImageView* _imageView;
	UIImage* _photo;
	long long _style;
	BOOL _isHighlighted;
	BOOL _isEmptySlot;
	BOOL _isPeripherySelection;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) BOOL isPeripherySelection;                          //@synthesize isPeripherySelection=_isPeripherySelection - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isEmptySlot,nonatomic) BOOL emptySlot; 
+(id)_silhouetteImage1up;
+(id)_silhouetteImageQuickLook;
+(SCD_Struct_ET2)_specValuesForStyle:(long long)arg1 ;
+(id)_addFriendPeripheryImage;
+(id)monogramFontForStyle:(long long)arg1 ;
+(id)_silhouetteImage12upCenter;
+(id)_addFriendImage;
+(id)_silhouetteImageNotificationCenter;
+(id)_dotImage;
-(void)_updateColorsForCurrentState;
-(BOOL)isPeripherySelection;
-(void)setIsPeripherySelection:(BOOL)arg1 ;
-(void)setEmptySlot:(BOOL)arg1 ;
-(BOOL)isEmptySlot;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setPhoto:(UIImage *)arg1 ;
-(id)_placeholderImage;
-(UIImage *)photo;
@end

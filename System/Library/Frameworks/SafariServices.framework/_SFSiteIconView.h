/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIImageView, UILabel, WebBookmark;

@interface _SFSiteIconView : UIImageView {

	UIImageView* _glyphView;
	UILabel* _monogramLabel;
	long long _state;
	BOOL _cacheIcon;
	WebBookmark* _bookmark;

}

@property (nonatomic,retain) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
+(void)initialize;
+(void)clearAllCachedIcons;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setState:(long long)arg1 ;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(void)updateBookmarkData;
-(void)clearCachedIcon;
-(void)_updateMonogramLabelSizeAndFont;
-(void)setBookmark:(id)arg1 cacheIcon:(BOOL)arg2 ;
-(id)_tintedFolderImage;
-(void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2 ;
-(long long)_inferredIconSize;
-(void)_clearGlyph;
-(WebBookmark *)bookmark;
@end


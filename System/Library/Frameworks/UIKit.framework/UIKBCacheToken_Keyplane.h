/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

	CGSize _size;
	SCD_Union_UI88 _style;
	NSString* _geometrySetName;
	NSString* _keySetName;
	NSString* _annotations;

}
+(id)tokenForKeyplane:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_UI40)styling;
-(void)setStyling:(SCD_Struct_UI40)arg1 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(id)stringForSplitState:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2 ;
@end


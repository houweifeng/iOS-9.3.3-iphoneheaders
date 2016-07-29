/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {

	SUScriptCanvasFunction* _function;

}
-(void)dealloc;
-(id)initWithFunction:(id)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(id)copyMaskImageWithSize:(CGSize)arg1 ;
@end

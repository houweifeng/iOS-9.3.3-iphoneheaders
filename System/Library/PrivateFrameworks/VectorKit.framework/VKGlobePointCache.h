/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKClassicGlobeCanvas;

@interface VKGlobePointCache : NSObject {

	VKClassicGlobeCanvas* _canvas;

}

@property (assign,nonatomic) VKClassicGlobeCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)setCanvas:(VKClassicGlobeCanvas *)arg1 ;
-(VKClassicGlobeCanvas *)canvas;
-(id)addHandleAtCoordinate:(CGSize)arg1 withHighPrecision:(BOOL)arg2 ;
-(VKPoint)pointForHandle:(id)arg1 atCoordinate:(CGSize)arg2 withHighPrecision:(BOOL)arg3 ;
-(void)removeHandle:(id)arg1 ;
@end

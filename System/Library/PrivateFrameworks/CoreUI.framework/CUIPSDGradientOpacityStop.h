/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

	double opacity;

}
+(id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2 ;
+(void)initialize;
-(BOOL)isOpacityStop;
-(double)opacityLocation;
-(id)initWithLocation:(double)arg1 opacity:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
@end

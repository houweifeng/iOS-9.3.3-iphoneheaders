/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDDrawable;

@interface GQDWrapPoint : NSObject {

	CGPoint mPoint;
	float mDistance;
	GQDDrawable* mDrawable;
	int mFlowType;
	int mZIndex;

}
-(long long)comparePoint:(id)arg1 ;
-(id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4 ;
-(int)zIndex;
@end


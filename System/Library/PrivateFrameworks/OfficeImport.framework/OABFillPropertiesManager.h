/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABFillPropertiesManager.h>

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
@required
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillBgAlpha;
-(int)fillAngle;
-(int)fillFocus;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(unsigned)fillBlipID;
-(id)fillBlipName;

@end


@protocol OABPropertiesManager;
@class NSString;

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {

	const EshFill* mFill;
	int mShapeType;
	id<OABPropertiesManager> mMasterManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(EshColor)shadowColor;
-(BOOL)isFilled;
-(BOOL)isStroked;
-(EshColor)fillFgColor;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillBgAlpha;
-(int)fillAngle;
-(int)fillFocus;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(id)initWithFill:(const EshFill*)arg1 shapeType:(int)arg2 masterShape:(EshShapeRef)arg3 ;
@end

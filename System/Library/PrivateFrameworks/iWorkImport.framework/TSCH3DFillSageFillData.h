/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageFillData.h>

@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {

	TSCH3DFill* mFill;
	NSMutableArray* mTextures;
	NSMutableArray* mTextureBlendModes;

}
+(id)dataWithFill:(id)arg1 ;
-(id)fillSetIdentifier;
-(id)lightingModel;
-(Color)emissive;
-(BOOL)isLayerEnabledForIndex:(unsigned long long)arg1 ;
-(id)textureForIndex:(unsigned long long)arg1 ;
-(int)layerTilingModeForIndex:(unsigned long long)arg1 ;
-(BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)arg1 ;
-(long long)layerBlendModeForIndex:(unsigned long long)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(unsigned long long)diffuseCount;
-(id)diffuseMaterial;
-(void)p_addMaterial:(id)arg1 blendMode:(long long)arg2 ;
-(unsigned long long)modulateCount;
-(id)modulateMaterial;
-(id)phongMaterials;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(float)layerScaleForIndex:(unsigned long long)arg1 ;
-(float)layerRotationForIndex:(unsigned long long)arg1 ;
-(id)layerLightenPercentageForIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)environment;
-(float)opacity;
-(Color)diffuse;
-(float)shininess;
-(Color)specular;
-(unsigned long long)layerCount;
@end

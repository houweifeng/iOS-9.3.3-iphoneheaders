/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAreaSceneObject.h>

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
+(id)chartSeriesType;
+(float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2 ;
+(float)chartSeriesDepth;
+(BOOL)supportsChartSeriesDepthOffset;
+(float)chartSeriesPolygonOffset;
-(float)depthForScene:(id)arg1 ;
-(BOOL)transparencyDepthMask;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartFeature.h>

@interface TSCHChartFeaturePie : TSCHChartFeature
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(BOOL)supportsReferenceLines;
-(unsigned long long)maxCellsToCheckForGridValueType;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)userInterfaceName;
-(Class)presetImagerClass;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsTrendLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsElementSeriesNames;
-(BOOL)supportsLabelExplosion;
-(BOOL)supportsPercentNumberFormatting;
-(BOOL)supportsMoreThanOneLiveCategory;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(SCD_Struct_TS432)arg2 ;
-(void)p_initializeAxisIDs;
-(BOOL)isPie;
@end


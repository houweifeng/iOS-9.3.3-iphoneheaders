/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartValueAxis.h>

@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {

	TSCHChartAxisAnalysis* mInProgressAnalysisForErrorBarData;

}
-(id)formattedStringForAxisValue:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(BOOL)supportsReferenceLines;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg1 ;
-(void)updateMultiDataModelAxisAnalysis:(id)arg1 ;
-(double)doubleAxisToModelValue:(double)arg1 ;
-(void)updateModelAxisAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4 ;
-(double*)unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange)arg2 min:(double)arg3 max:(double)arg4 ;
-(id)dataFormatter;
-(id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(double)interceptForAxis:(id)arg1 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3 ;
-(BOOL)editableFormatForValueStrings;
-(id)valueForFormattedString:(id)arg1 ;
-(double)totalForGroup:(unsigned long long)arg1 ;
-(BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(id)userMin;
-(id)userMax;
@end


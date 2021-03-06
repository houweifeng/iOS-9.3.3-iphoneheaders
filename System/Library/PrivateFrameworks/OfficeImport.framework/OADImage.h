/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)imageProperties;
-(id)movie;
-(void)setMovie:(id)arg1 ;
-(void)setOle:(id)arg1 ;
-(id)initWithBlipRef:(id)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)ole;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBSectionInfo;

@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying> {

	BLTPBSectionInfo* _sectionInfo;

}

@property (nonatomic,readonly) BOOL hasSectionInfo; 
@property (nonatomic,retain) BLTPBSectionInfo * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BLTPBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(BLTPBSectionInfo *)arg1 ;
-(BOOL)hasSectionInfo;
@end


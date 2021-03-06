/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, UIImage, IMHandle, NSString;

@interface CKEntity : NSObject {

	CNContact* _cnContact;
	UIImage* _transcriptContactImage;
	UIImage* _transcriptDrawerContactImage;
	IMHandle* _handle;

}

@property (nonatomic,retain,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) void* abRecord; 
@property (nonatomic,retain) CNContact * cnContact;                                            //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) int propertyType; 
@property (nonatomic,readonly) int identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * rawAddress; 
@property (nonatomic,copy,readonly) NSString * originalAddress; 
@property (nonatomic,copy,readonly) NSString * IDSCanonicalAddress; 
@property (nonatomic,copy,readonly) NSString * textToneIdentifier; 
@property (nonatomic,copy,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,retain,readonly) UIImage * transcriptContactImage;                        //@synthesize transcriptContactImage=_transcriptContactImage - In the implementation block
@property (nonatomic,retain,readonly) UIImage * transcriptDrawerContactImage;                  //@synthesize transcriptDrawerContactImage=_transcriptDrawerContactImage - In the implementation block
@property (nonatomic,retain,readonly) UIImage * locationMapViewContactImage; 
@property (nonatomic,retain,readonly) UIImage * locationShareBalloonContactImage; 
@property (nonatomic,retain) IMHandle * handle;                                                //@synthesize handle=_handle - In the implementation block
+(id)copyEntityForAddressString:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(id)personViewControllerWithDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(int)identifier;
-(void)setHandle:(IMHandle *)arg1 ;
-(IMHandle *)handle;
-(id)initWithIMHandle:(id)arg1 ;
-(UIImage *)locationMapViewContactImage;
-(IMHandle *)defaultIMHandle;
-(NSString *)IDSCanonicalAddress;
-(NSString *)rawAddress;
-(int)propertyType;
-(void*)abRecord;
-(CNContact *)cnContact;
-(NSString *)originalAddress;
-(void)setCnContact:(CNContact *)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(NSString *)textToneIdentifier;
-(NSString *)textVibrationIdentifier;
-(UIImage *)locationShareBalloonContactImage;
-(UIImage *)transcriptContactImage;
-(UIImage *)transcriptDrawerContactImage;
-(NSString *)fullName;
@end


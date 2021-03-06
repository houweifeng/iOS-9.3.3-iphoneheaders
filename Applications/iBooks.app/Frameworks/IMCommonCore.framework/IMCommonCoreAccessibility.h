/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCoreAccessibilityExtras.h>

@class NSString;

@interface IMCommonCoreAccessibility : NSObject <IMCommonCoreAccessibilityExtras> {

	BOOL _accessibilitySupportLoaded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setAccessibilitySupportLoaded:,getter=_isAccessibilitySupportLoaded,nonatomic) BOOL _accessibilitySupportLoaded;              //@synthesize accessibilitySupportLoaded=_accessibilitySupportLoaded - In the implementation block
+(id)sharedInstance;
-(id)preferencesDomain;
-(BOOL)needsAccessibilityAnnouncements;
-(void)performExtraValidation;
-(void)addExtraSafeCategoryNamesToCollection:(id)arg1 ;
-(BOOL)needsAccessibilityElements;
-(BOOL)_isAccessibilitySupportLoaded;
-(void)addSafeCategoryNamesToCollection:(id)arg1 ;
-(void)_setAccessibilitySupportLoaded:(BOOL)arg1 ;
-(void)loadAccessibilitySupport;
-(void)performValidation;
@end


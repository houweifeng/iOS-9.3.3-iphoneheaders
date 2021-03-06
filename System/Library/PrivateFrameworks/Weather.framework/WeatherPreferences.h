/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate, OS_dispatch_queue;
@class NSString, NSArray, WeatherCloudPreferences, NSObject;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {

	BOOL _isCelsius;
	NSString* _UUID;
	NSString* _serviceHost;
	BOOL _serviceDebugging;
	NSArray* _lastUbiquitousWrittenDefaults;
	id<WeatherPreferencesPersistence> _persistence;
	BOOL _userGroupPrefsLockedWhenInit;
	id<SynchronizedDefaultsDelegate> _syncDelegate;
	WeatherCloudPreferences* _cloudPreferences;
	NSObject*<OS_dispatch_queue> _celsiusQueue;

}

@property (assign,nonatomic,__weak) id<SynchronizedDefaultsDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (retain) WeatherCloudPreferences * cloudPreferences;                                  //@synthesize cloudPreferences=_cloudPreferences - In the implementation block
@property (assign,nonatomic) BOOL userGroupPrefsLockedWhenInit;                                 //@synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> celsiusQueue;                         //@synthesize celsiusQueue=_celsiusQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPreferences;
+(id)_getGroupDefaultsFromURLInApp:(id)arg1 ;
+(id)userDefaultsPersistence;
+(id)preferencesWithPersistence:(id)arg1 ;
+(void)clearSharedPreferences;
+(id)serviceDebuggingPath;
-(void)dealloc;
-(id)init;
-(id)UUID;
-(void)resetLocale;
-(id)readInternalDefaultValueForKey:(id)arg1 ;
-(BOOL)isCelsius;
-(id)readDefaultValueForKey:(id)arg1 ;
-(void)writeDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeStateToDisk;
-(id)localWeatherCity;
-(void)saveToDiskWithLocalWeatherCity:(id)arg1 ;
-(BOOL)_ensurePrefsLoaded;
-(id)loadSavedCities;
-(BOOL)_defaultsAreValid;
-(void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)_defaultCities;
-(BOOL)areCitiesDefault:(id)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(void)setupUbiquitousStoreIfNeeded;
-(id)initWithPersistence:(id)arg1 ;
-(WeatherCloudPreferences *)cloudPreferences;
-(BOOL)performMigration;
-(BOOL)_checkAndPerformMigrationIfNeeded;
-(void)initOnPrefLoadWithPersistence:(id)arg1 ;
-(void)setCloudPreferences:(WeatherCloudPreferences *)arg1 ;
-(void)setDefaultSelectedCityID:(id)arg1 ;
-(void)synchronizeStateToDiskDoNotify:(BOOL)arg1 ;
-(BOOL)isLocalWeatherEnabled;
-(void)setLocalWeatherEnabled:(BOOL)arg1 ;
-(BOOL)readTemperatureUnits;
-(void)setCelsius:(BOOL)arg1 ;
-(void)registerTemperatureUnits;
-(BOOL)_defaultsCurrent;
-(id)cityFromPreferencesDictionary:(id)arg1 ;
-(id)preferencesDictionaryForCity:(id)arg1 ;
-(void)saveToDiskWithCities:(id)arg1 ;
-(BOOL)cityDictionaryHasValidCoordinates:(id)arg1 ;
-(id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
-(int)loadActiveCity;
-(void)setActiveCity:(unsigned long long)arg1 ;
-(id)citiesByConsolidatingDuplicatesInBucket:(id)arg1 ;
-(void)saveToUbiquitousStore;
-(BOOL)ensureValidSelectedCityID;
-(void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1 ;
-(void)setYahooWeatherURLString:(id)arg1 ;
-(id)yahooWeatherURLString;
-(void)updateUnitsFromNotification;
-(void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2 ;
-(void)setDefaultCities:(id)arg1 ;
-(int)loadDefaultSelectedCity;
-(id)loadDefaultSelectedCityID;
-(void)setDefaultSelectedCity:(unsigned long long)arg1 ;
-(id)twcLogoURL;
-(id)twcLogoURL:(id)arg1 ;
-(void)_clearCachedObjects;
-(BOOL)userGroupPrefsLockedWhenInit;
-(void)setUserGroupPrefsLockedWhenInit:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)celsiusQueue;
-(void)setCelsiusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)serviceDebugging;
-(id)_cacheDirectoryPath;
-(id)serviceHost;
@end


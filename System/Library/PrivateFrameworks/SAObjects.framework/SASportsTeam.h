/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSString, NSArray, NSNumber;

@interface SASportsTeam : SASportsEntity

@property (nonatomic,copy) NSString * abbreviatedName; 
@property (assign,nonatomic) BOOL alwaysUseAthleteFullName; 
@property (nonatomic,copy) NSArray * athletes; 
@property (nonatomic,copy) NSString * awayLosses; 
@property (nonatomic,copy) NSString * awayOvertimeLosses; 
@property (nonatomic,copy) NSString * awayPoints; 
@property (nonatomic,copy) NSString * awayTies; 
@property (nonatomic,copy) NSString * awayWins; 
@property (nonatomic,copy) NSNumber * clinchedQualificationPosition; 
@property (nonatomic,copy) NSNumber * conferencePosition; 
@property (nonatomic,copy) NSString * gamesBehind; 
@property (nonatomic,copy) NSString * gamesPlayed; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSNumber * groupPosition; 
@property (nonatomic,copy) NSString * groupPositionDescription; 
@property (nonatomic,copy) NSString * homeLosses; 
@property (nonatomic,copy) NSString * homeOvertimeLosses; 
@property (nonatomic,copy) NSString * homePoints; 
@property (nonatomic,copy) NSString * homeTies; 
@property (nonatomic,copy) NSString * homeWins; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * losses; 
@property (nonatomic,copy) NSString * monogram; 
@property (nonatomic,copy) NSArray * news; 
@property (nonatomic,copy) NSString * overtimeLosses; 
@property (nonatomic,copy) NSString * points; 
@property (nonatomic,copy) NSString * pointsAgainst; 
@property (nonatomic,copy) NSString * pointsFor; 
@property (nonatomic,copy) NSNumber * primaryColor; 
@property (nonatomic,copy) NSString * qualificationPosition; 
@property (nonatomic,copy) NSString * qualificationPositionSummary; 
@property (nonatomic,copy) NSArray * rankings; 
@property (nonatomic,copy) NSNumber * secondaryColor; 
@property (nonatomic,copy) NSArray * statistics; 
@property (nonatomic,copy) NSString * streakNumber; 
@property (nonatomic,copy) NSString * streakType; 
@property (nonatomic,copy) NSString * ties; 
@property (nonatomic,copy) NSString * venueLocation; 
@property (nonatomic,copy) NSString * venueName; 
@property (nonatomic,copy) NSString * winPercentage; 
@property (nonatomic,copy) NSString * wins; 
+(id)team;
+(id)teamWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)ACSportsFormattedRecord;
-(id)ACSportsValueForStandingsSnippetColumn:(id)arg1 ;
-(BOOL)ACSportsLeagueForSportsTeamUsesWDLRecordFormat;
-(Class)domainObjectViewClass;
-(id)siriui_displayName;
-(void)siriui_enumerateEntitiesWithGroupHandler:(/*^block*/id)arg1 teamHandler:(/*^block*/id)arg2 athleteHandler:(/*^block*/id)arg3 ;
-(id)_siriui_sportsValueForStandingsSnippetColumn:(id)arg1 ;
-(id)siriui_displayNameAndLocation;
-(id)siriui_localizedSnippetColumnHeader:(id)arg1 ;
-(id)siriui_textForSnippetColumn:(id)arg1 ;
-(id)siriui_localizedQualificationPositionFormatString;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)location;
-(void)setMonogram:(NSString *)arg1 ;
-(NSString *)monogram;
-(NSNumber *)primaryColor;
-(void)setLocation:(NSString *)arg1 ;
-(void)setPrimaryColor:(NSNumber *)arg1 ;
-(void)setSecondaryColor:(NSNumber *)arg1 ;
-(NSNumber *)secondaryColor;
-(NSString *)points;
-(void)setPoints:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)news;
-(void)setStatistics:(NSArray *)arg1 ;
-(NSArray *)athletes;
-(void)setAthletes:(NSArray *)arg1 ;
-(NSString *)abbreviatedName;
-(void)setAbbreviatedName:(NSString *)arg1 ;
-(BOOL)alwaysUseAthleteFullName;
-(void)setAlwaysUseAthleteFullName:(BOOL)arg1 ;
-(NSString *)awayLosses;
-(void)setAwayLosses:(NSString *)arg1 ;
-(NSString *)awayOvertimeLosses;
-(void)setAwayOvertimeLosses:(NSString *)arg1 ;
-(NSString *)awayPoints;
-(void)setAwayPoints:(NSString *)arg1 ;
-(NSString *)awayTies;
-(void)setAwayTies:(NSString *)arg1 ;
-(NSString *)awayWins;
-(void)setAwayWins:(NSString *)arg1 ;
-(NSNumber *)clinchedQualificationPosition;
-(void)setClinchedQualificationPosition:(NSNumber *)arg1 ;
-(NSNumber *)conferencePosition;
-(void)setConferencePosition:(NSNumber *)arg1 ;
-(NSString *)gamesBehind;
-(void)setGamesBehind:(NSString *)arg1 ;
-(NSString *)gamesPlayed;
-(void)setGamesPlayed:(NSString *)arg1 ;
-(NSNumber *)groupPosition;
-(void)setGroupPosition:(NSNumber *)arg1 ;
-(NSString *)groupPositionDescription;
-(void)setGroupPositionDescription:(NSString *)arg1 ;
-(NSString *)homeLosses;
-(void)setHomeLosses:(NSString *)arg1 ;
-(NSString *)homeOvertimeLosses;
-(void)setHomeOvertimeLosses:(NSString *)arg1 ;
-(NSString *)homePoints;
-(void)setHomePoints:(NSString *)arg1 ;
-(NSString *)homeTies;
-(void)setHomeTies:(NSString *)arg1 ;
-(NSString *)homeWins;
-(void)setHomeWins:(NSString *)arg1 ;
-(NSString *)losses;
-(void)setLosses:(NSString *)arg1 ;
-(void)setNews:(NSArray *)arg1 ;
-(NSString *)overtimeLosses;
-(void)setOvertimeLosses:(NSString *)arg1 ;
-(NSString *)pointsAgainst;
-(void)setPointsAgainst:(NSString *)arg1 ;
-(NSString *)pointsFor;
-(void)setPointsFor:(NSString *)arg1 ;
-(NSString *)qualificationPosition;
-(void)setQualificationPosition:(NSString *)arg1 ;
-(NSString *)qualificationPositionSummary;
-(void)setQualificationPositionSummary:(NSString *)arg1 ;
-(NSArray *)rankings;
-(void)setRankings:(NSArray *)arg1 ;
-(NSString *)streakNumber;
-(void)setStreakNumber:(NSString *)arg1 ;
-(NSString *)streakType;
-(void)setStreakType:(NSString *)arg1 ;
-(NSString *)ties;
-(void)setTies:(NSString *)arg1 ;
-(NSString *)venueLocation;
-(void)setVenueLocation:(NSString *)arg1 ;
-(NSString *)venueName;
-(void)setVenueName:(NSString *)arg1 ;
-(NSString *)winPercentage;
-(void)setWinPercentage:(NSString *)arg1 ;
-(NSString *)wins;
-(void)setWins:(NSString *)arg1 ;
-(NSArray *)statistics;
-(id)encodedClassName;
@end

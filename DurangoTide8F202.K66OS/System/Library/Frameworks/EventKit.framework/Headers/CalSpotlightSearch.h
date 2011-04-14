/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol CalSearchDataSink;

@interface CalSpotlightSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	NSString *_titleString;	// 8 = 0x8
	NSString *_locationString;	// 12 = 0xc
	NSString *_descriptionString;	// 16 = 0x10
	NSString *_participantString;	// 20 = 0x14
	id<CalSearchDataSink> _dataSink;	// 24 = 0x18
	bool _moreResultsAvailable;	// 28 = 0x1c
	bool _onlySearchEvents;	// 29 = 0x1d
	CFArrayRef _partialResults;	// 32 = 0x20
	CFSetRef _matchedEventsSet;	// 36 = 0x24
	CFSetRef _matchedParticipantsSet;	// 40 = 0x28
	bool _implementsCancellationCallback;	// 44 = 0x2c
	CFDictionaryRef _closestEventOccurrences;	// 48 = 0x30
	bool _cancelled;	// 52 = 0x34
}
+ (CFDictionaryRef)newQueryCache;	// 0x3166e95d
- (id)initWithDatabase:(CalDatabase *)database searchString:(CFStringRef)string dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x3166e865
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x3166e979
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 queryCache:(CFDictionaryRef)cache;	// 0x3166e821
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x3166eac1
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x3166ebb1
- (CalEventSpotlightContext *)_createSpotlightEventsContext;	// 0x3166ee55
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x3166ebfd
- (void)_deleteSpotlightEventsContext:(CalEventSpotlightContext *)context;	// 0x3166ef5d
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x3166eb01
- (void)_getSpotlightEvents:(CalEventSpotlightContext *)events callback:(id)callback;	// 0x3166ec09
- (void)_startLoadingResults:(id)results;	// 0x3166e729
- (void)calculateSearchWindow:(CalEventSpotlightContext *)window;	// 0x3166ed35
- (void)dealloc;	// 0x3166e895
- (void)performWithBlock:(id)block;	// 0x3166e7f5
- (void)startSearching;	// 0x3166e809
- (void)stopSearching;	// 0x3166e6cd
@end

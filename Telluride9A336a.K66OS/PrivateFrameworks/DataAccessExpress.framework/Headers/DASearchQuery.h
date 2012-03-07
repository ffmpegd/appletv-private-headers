/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "DataAccessExpress-Structs.h"

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject {
	int _state;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	NSRange _range;	// 12 = 0xc
	int _timeLimit;	// 20 = 0x14
	unsigned _searchID;	// 24 = 0x18
	id<DASearchQueryConsumer> _consumer;	// 28 = 0x1c
}
@property(assign) id<DASearchQueryConsumer> consumer;	// G=0x31367dbd; S=0x31367dcd; @synthesize=_consumer
@property(assign) unsigned maxResults;	// G=0x31367cf5; S=0x31367d09; 
@property(assign) NSRange range;	// G=0x31367d4d; S=0x31367d69; @synthesize=_range
@property(assign) unsigned searchID;	// G=0x31367d1d; S=0x31367d2d; @synthesize=_searchID
@property(readonly, assign) NSString *searchString;	// G=0x31367d3d; @synthesize=_searchString
@property(assign) int state;	// G=0x31367d9d; S=0x31367dad; @synthesize=_state
@property(assign) int timeLimit;	// G=0x31367d7d; S=0x31367d8d; @synthesize=_timeLimit
+ (id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x31367841
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x31367a0d
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3136788d
// declared property getter: - (id)consumer;	// 0x31367dbd
- (void)dealloc;	// 0x3136793d
- (id)description;	// 0x31367999
- (id)dictionaryRepresentation;	// 0x31367bc1
- (BOOL)isQueryRunning;	// 0x31367b31
// declared property getter: - (unsigned)maxResults;	// 0x31367cf5
// declared property getter: - (NSRange)range;	// 0x31367d4d
// declared property getter: - (unsigned)searchID;	// 0x31367d1d
// declared property getter: - (id)searchString;	// 0x31367d3d
- (void)sendFinishedToConsumerWithError:(id)error;	// 0x31367b85
- (void)sendResultsToConsumer:(id)consumer;	// 0x31367b49
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x31367dcd
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x31367d09
// declared property setter: - (void)setRange:(NSRange)range;	// 0x31367d69
// declared property setter: - (void)setSearchID:(unsigned)anId;	// 0x31367d2d
// declared property setter: - (void)setState:(int)state;	// 0x31367dad
// declared property setter: - (void)setTimeLimit:(int)limit;	// 0x31367d8d
// declared property getter: - (int)state;	// 0x31367d9d
// declared property getter: - (int)timeLimit;	// 0x31367d7d
@end


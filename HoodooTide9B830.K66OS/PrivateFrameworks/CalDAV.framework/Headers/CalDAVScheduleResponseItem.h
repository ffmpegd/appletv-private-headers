/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 24 = 0x18
	NSMutableSet *_successfulICS;	// 28 = 0x1c
	NSMutableSet *_failedResponseItems;	// 32 = 0x20
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x31478331; S=0x3147830d; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x314782b9; S=0x31478295; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x314782f5; S=0x314782d1; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x31478601
- (void)addNewTopLevelItem:(id)item;	// 0x314783b9
- (id)copyParseRules;	// 0x31477925
- (void)dealloc;	// 0x3147822d
- (id)description;	// 0x31478349
// declared property getter: - (id)failedResponseItems;	// 0x31478331
// declared property getter: - (id)responses;	// 0x314782b9
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x3147830d
// declared property setter: - (void)setResponses:(id)responses;	// 0x31478295
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x314782d1
// declared property getter: - (id)successfulICS;	// 0x314782f5
@end


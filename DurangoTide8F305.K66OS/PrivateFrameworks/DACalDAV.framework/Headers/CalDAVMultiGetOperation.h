/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVSession, NSString, NSArray;

@interface CalDAVMultiGetOperation : AYOperation {
	NSString *_uri;	// 64 = 0x40
	NSArray *_resourceURIs;	// 68 = 0x44
	DAVSession *_session;	// 72 = 0x48
	BOOL _useScheduleChanges;	// 76 = 0x4c
	BOOL _getScheduleTags;	// 77 = 0x4d
}
@property(assign) BOOL getScheduleTags;	// G=0x3409c0c1; S=0x3409c0d1; @synthesize=_getScheduleTags
@property(readonly, assign) NSArray *resourceURIs;	// G=0x3409c0b1; @synthesize=_resourceURIs
@property(readonly, assign) BOOL useScheduleChanges;	// G=0x3409c0a1; @synthesize=_useScheduleChanges
- (id)initWithSession:(id)session URI:(id)uri resources:(id)resources useScheduleChanges:(BOOL)changes;	// 0x3409c409
- (id)calendarData;	// 0x3409c349
- (void)dealloc;	// 0x3409c39d
- (id)etags;	// 0x3409c381
- (void)getResources;	// 0x3409c5f9
// declared property getter: - (BOOL)getScheduleTags;	// 0x3409c0c1
// declared property getter: - (id)resourceURIs;	// 0x3409c0b1
- (id)resources;	// 0x3409cb0d
- (id)scheduleChanges;	// 0x3409c32d
- (id)scheduleTags;	// 0x3409c365
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x3409c0d1
// declared property getter: - (BOOL)useScheduleChanges;	// 0x3409c0a1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerMultiGetTask.h> // Unknown library


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 160 = 0xa0
	BOOL _getScheduleChanges;	// 161 = 0xa1
}
@property(assign) BOOL getScheduleChanges;	// G=0x35faf891; S=0x35faf8a1; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x35faf8b1; S=0x35faf8c1; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x35faf8d1
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x35fafab9
- (id)copyAdditionalPropElements;	// 0x35faf929
// declared property getter: - (BOOL)getScheduleChanges;	// 0x35faf891
// declared property getter: - (BOOL)getScheduleTags;	// 0x35faf8b1
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x35fafa21
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x35faf8a1
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x35faf8c1
@end


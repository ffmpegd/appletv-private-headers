/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPrincipalPropertySearchTask.h> // Unknown library

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {
	NSSet *_searchTypes;	// 140 = 0x8c
	NSSet *_searchStrings;	// 144 = 0x90
	CalDAVPrincipalSearchPropertySet *_serverSupportSet;	// 148 = 0x94
	void *_searchContext;	// 152 = 0x98
}
@property(assign, nonatomic) void *searchContext;	// G=0x33262ea5; S=0x33262eb5; @synthesize=_searchContext
@property(retain) NSSet *searchStrings;	// G=0x332635d9; S=0x332635b5; @synthesize=_searchStrings
@property(retain) NSSet *searchTypes;	// G=0x3326359d; S=0x33263579; @synthesize=_searchTypes
@property(retain) CalDAVPrincipalSearchPropertySet *serverSupportSet;	// G=0x33263615; S=0x332635f1; @synthesize=_serverSupportSet
+ (id)_propertiesToFindForServerSupportSet:(id)serverSupportSet;	// 0x33263225
- (id)initWithSearchStrings:(id)searchStrings searchTypes:(id)types serverSupportSet:(id)set atURL:(id)url;	// 0x3326362d
- (void)dealloc;	// 0x33263505
- (id)extraAttributes;	// 0x33262ec5
// declared property getter: - (void *)searchContext;	// 0x33262ea5
- (id)searchItems;	// 0x33262f95
// declared property getter: - (id)searchStrings;	// 0x332635d9
// declared property getter: - (id)searchTypes;	// 0x3326359d
// declared property getter: - (id)serverSupportSet;	// 0x33263615
// declared property setter: - (void)setSearchContext:(void *)context;	// 0x33262eb5
// declared property setter: - (void)setSearchStrings:(id)strings;	// 0x332635b5
// declared property setter: - (void)setSearchTypes:(id)types;	// 0x33263579
// declared property setter: - (void)setServerSupportSet:(id)set;	// 0x332635f1
@end


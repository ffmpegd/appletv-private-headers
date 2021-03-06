/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPrincipalPropertySearchTask.h> // Unknown library

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {
	NSSet *_searchTypes;	// 156 = 0x9c
	NSSet *_searchStrings;	// 160 = 0xa0
	CalDAVPrincipalSearchPropertySet *_serverSupportSet;	// 164 = 0xa4
	void *_searchContext;	// 168 = 0xa8
}
@property(assign, nonatomic) void *searchContext;	// G=0x3359f3c5; S=0x3359f3d5; @synthesize=_searchContext
@property(retain) NSSet *searchStrings;	// G=0x3359f37d; S=0x3359f391; @synthesize=_searchStrings
@property(retain) NSSet *searchTypes;	// G=0x3359f359; S=0x3359f36d; @synthesize=_searchTypes
@property(retain) CalDAVPrincipalSearchPropertySet *serverSupportSet;	// G=0x3359f3a1; S=0x3359f3b5; @synthesize=_serverSupportSet
+ (id)_propertiesToFindForServerSupportSet:(id)serverSupportSet;	// 0x3359ebc5
- (id)initWithSearchStrings:(id)searchStrings searchTypes:(id)types serverSupportSet:(id)set atURL:(id)url;	// 0x3359ee95
- (void)dealloc;	// 0x3359eb4d
- (id)extraAttributes;	// 0x3359efd9
// declared property getter: - (void *)searchContext;	// 0x3359f3c5
- (id)searchItems;	// 0x3359f0a9
// declared property getter: - (id)searchStrings;	// 0x3359f37d
// declared property getter: - (id)searchTypes;	// 0x3359f359
// declared property getter: - (id)serverSupportSet;	// 0x3359f3a1
// declared property setter: - (void)setSearchContext:(void *)context;	// 0x3359f3d5
// declared property setter: - (void)setSearchStrings:(id)strings;	// 0x3359f391
// declared property setter: - (void)setSearchTypes:(id)types;	// 0x3359f36d
// declared property setter: - (void)setServerSupportSet:(id)set;	// 0x3359f3b5
@end


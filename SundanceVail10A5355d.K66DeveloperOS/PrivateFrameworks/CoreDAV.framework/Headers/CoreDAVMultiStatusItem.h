/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray *_orderedResponses;	// 28 = 0x1c
	CoreDAVLeafItem *_responseDescription;	// 32 = 0x20
}
@property(retain) NSMutableArray *orderedResponses;	// G=0x30498a5d; S=0x30498a71; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x30498a81; S=0x30498a95; @synthesize=_responseDescription
@property(readonly, assign) NSSet *responses;	// G=0x30498a25; 
+ (id)copyParseRules;	// 0x30498775
- (id)init;	// 0x304985f9
- (void)addResponse:(id)response;	// 0x3049898d
- (void)dealloc;	// 0x30498625
- (id)description;	// 0x30498689
// declared property getter: - (id)orderedResponses;	// 0x30498a5d
// declared property getter: - (id)responseDescription;	// 0x30498a81
// declared property getter: - (id)responses;	// 0x30498a25
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x30498a71
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x30498a95
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
	NSMutableSet *_supportedReports;	// 24 = 0x18
}
@property(retain) NSMutableSet *supportedReports;	// G=0x31c55405; S=0x31c55419; @synthesize=_supportedReports
- (id)init;	// 0x31c55129
- (void)addSupportedReport:(id)report;	// 0x31c55369
- (id)copyParseRules;	// 0x31c55265
- (void)dealloc;	// 0x31c55155
- (id)description;	// 0x31c551a1
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x31c55419
// declared property getter: - (id)supportedReports;	// 0x31c55405
@end


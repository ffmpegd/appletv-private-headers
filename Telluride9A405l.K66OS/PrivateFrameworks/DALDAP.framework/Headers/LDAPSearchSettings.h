/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface LDAPSearchSettings : NSObject {
	NSString *_searchDescription;	// 4 = 0x4
	NSString *_searchBase;	// 8 = 0x8
	int _scope;	// 12 = 0xc
}
@property(assign) int scope;	// G=0x37048315; S=0x37048325; @synthesize=_scope
@property(retain) NSString *searchBase;	// G=0x370482dd; S=0x370482f1; @synthesize=_searchBase
@property(retain) NSString *searchDescription;	// G=0x370482a5; S=0x370482b9; @synthesize=_searchDescription
- (id)initWithSettingsDict:(id)settingsDict;	// 0x37047f01
- (void)dealloc;	// 0x37047ea1
- (id)description;	// 0x3704821d
- (BOOL)hasSameScopeAndBaseAsOther:(id)other;	// 0x370480a1
- (unsigned)hash;	// 0x37048161
- (BOOL)isEqual:(id)equal;	// 0x37048199
// declared property getter: - (int)scope;	// 0x37048315
// declared property getter: - (id)searchBase;	// 0x370482dd
// declared property getter: - (id)searchDescription;	// 0x370482a5
// declared property setter: - (void)setScope:(int)scope;	// 0x37048325
// declared property setter: - (void)setSearchBase:(id)base;	// 0x370482f1
// declared property setter: - (void)setSearchDescription:(id)description;	// 0x370482b9
- (id)settingsDict;	// 0x37047fd5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface GEOSearchAttributionInfo : NSObject {
	NSString *_identifier;	// 4 = 0x4
	unsigned _version;	// 8 = 0x8
	NSString *_logoPath;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	unsigned _attributionRequirementsMask;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x37aa13a1; @synthesize=_displayName
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x37aa1371; @synthesize=_identifier
@property(readonly, assign, nonatomic) NSString *logoPath;	// G=0x37aa1391; @synthesize=_logoPath
@property(readonly, assign, nonatomic) unsigned version;	// G=0x37aa1381; @synthesize=_version
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x37aa1005
- (id)initWithSource:(id)source localizedAttribution:(id)attribution logoPath:(id)path;	// 0x37aa0ed9
- (void)dealloc;	// 0x37aa12f9
- (id)description;	// 0x37aa126d
- (id)dictionaryRepresentation;	// 0x37aa1149
// declared property getter: - (id)displayName;	// 0x37aa13a1
- (BOOL)hasAttributionRequirement:(int)requirement;	// 0x37aa12dd
// declared property getter: - (id)identifier;	// 0x37aa1371
// declared property getter: - (id)logoPath;	// 0x37aa1391
// declared property getter: - (unsigned)version;	// 0x37aa1381
@end

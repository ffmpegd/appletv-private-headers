/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSource : PBCodable {
	NSString *_sourceName;	// 4 = 0x4
	NSString *_sourceId;	// 8 = 0x8
	NSString *_sourceVersion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasSourceVersion;	// G=0x35f3f3b9; 
@property(retain, nonatomic) NSString *sourceId;	// G=0x35f3f695; S=0x35f3f6a5; @synthesize=_sourceId
@property(retain, nonatomic) NSString *sourceName;	// G=0x35f3f661; S=0x35f3f671; @synthesize=_sourceName
@property(retain, nonatomic) NSString *sourceVersion;	// G=0x35f3f6c9; S=0x35f3f6d9; @synthesize=_sourceVersion
- (void)dealloc;	// 0x35f3f34d
- (id)description;	// 0x35f3f3d1
- (id)dictionaryRepresentation;	// 0x35f3f441
// declared property getter: - (BOOL)hasSourceVersion;	// 0x35f3f3b9
- (BOOL)readFrom:(id)from;	// 0x35f3f4ed
// declared property setter: - (void)setSourceId:(id)anId;	// 0x35f3f6a5
// declared property setter: - (void)setSourceName:(id)name;	// 0x35f3f671
// declared property setter: - (void)setSourceVersion:(id)version;	// 0x35f3f6d9
// declared property getter: - (id)sourceId;	// 0x35f3f695
// declared property getter: - (id)sourceName;	// 0x35f3f661
// declared property getter: - (id)sourceVersion;	// 0x35f3f6c9
- (void)writeTo:(id)to;	// 0x35f3f5fd
@end

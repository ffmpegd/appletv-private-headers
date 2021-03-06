/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMCopyright : PBCodable {
	NSMutableArray *_mapDataCopyrights;	// 4 = 0x4
	NSMutableArray *_imageryCopyrights;	// 8 = 0x8
	BOOL _hasCopyrightYear;	// 12 = 0xc
	int _copyrightYear;	// 16 = 0x10
}
@property(assign, nonatomic) int copyrightYear;	// G=0x33aae76d; S=0x33aae2ed; @synthesize=_copyrightYear
@property(assign, nonatomic) BOOL hasCopyrightYear;	// G=0x33aae74d; S=0x33aae75d; @synthesize=_hasCopyrightYear
@property(retain, nonatomic) NSMutableArray *imageryCopyrights;	// G=0x33aae719; S=0x33aae729; @synthesize=_imageryCopyrights
@property(retain, nonatomic) NSMutableArray *mapDataCopyrights;	// G=0x33aae6e5; S=0x33aae6f5; @synthesize=_mapDataCopyrights
- (void)addImageryCopyright:(id)copyright;	// 0x33aae249
- (void)addMapDataCopyright:(id)copyright;	// 0x33aae1a5
// declared property getter: - (int)copyrightYear;	// 0x33aae76d
- (void)dealloc;	// 0x33aae14d
- (id)description;	// 0x33aae311
- (id)dictionaryRepresentation;	// 0x33aae381
// declared property getter: - (BOOL)hasCopyrightYear;	// 0x33aae74d
- (id)imageryCopyrightAtIndex:(unsigned)index;	// 0x33aae2cd
// declared property getter: - (id)imageryCopyrights;	// 0x33aae719
- (unsigned)imageryCopyrightsCount;	// 0x33aae2ad
- (id)mapDataCopyrightAtIndex:(unsigned)index;	// 0x33aae229
// declared property getter: - (id)mapDataCopyrights;	// 0x33aae6e5
- (unsigned)mapDataCopyrightsCount;	// 0x33aae209
- (BOOL)readFrom:(id)from;	// 0x33aae459
// declared property setter: - (void)setCopyrightYear:(int)year;	// 0x33aae2ed
// declared property setter: - (void)setHasCopyrightYear:(BOOL)year;	// 0x33aae75d
// declared property setter: - (void)setImageryCopyrights:(id)copyrights;	// 0x33aae729
// declared property setter: - (void)setMapDataCopyrights:(id)copyrights;	// 0x33aae6f5
- (void)writeTo:(id)to;	// 0x33aae571
@end


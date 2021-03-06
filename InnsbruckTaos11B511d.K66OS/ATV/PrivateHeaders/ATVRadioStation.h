/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class RadioStation, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioStation : XXUnknownSuperclass {
	BOOL _isPreviewStation;	// 4 = 0x4
	RadioStation *_radioStation;	// 8 = 0x8
	NSDictionary *_stationDict;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isPreviewStation;	// G=0x67be5; S=0x67bf5; @synthesize=_isPreviewStation
@property(retain, nonatomic) RadioStation *radioStation;	// G=0x67b75; S=0x67b85; @synthesize=_radioStation
@property(retain, nonatomic) NSDictionary *stationDict;	// G=0x67bad; S=0x67bbd; @synthesize=_stationDict
- (id)initWithDataClient:(id)dataClient radioStation:(id)station;	// 0x66d3d
- (id)initWithDataClient:(id)dataClient radioStation:(id)station stationDict:(id)dict;	// 0x66da5
- (void).cxx_destruct;	// 0x67c05
- (id)_streamCertificateURL;	// 0x67ae5
- (id)_streamKeyURL;	// 0x67b2d
- (id)_streamURL;	// 0x67a9d
- (id)concreteValueForProperty:(id)property;	// 0x66ff9
- (void)dealloc;	// 0x66e11
- (id)description;	// 0x66f39
- (unsigned)hash;	// 0x66efd
- (BOOL)isEqual:(id)equal;	// 0x66e55
// declared property getter: - (BOOL)isPreviewStation;	// 0x67be5
// declared property getter: - (id)radioStation;	// 0x67b75
// declared property setter: - (void)setIsPreviewStation:(BOOL)station;	// 0x67bf5
// declared property setter: - (void)setRadioStation:(id)station;	// 0x67b85
// declared property setter: - (void)setStationDict:(id)dict;	// 0x67bbd
// declared property getter: - (id)stationDict;	// 0x67bad
@end


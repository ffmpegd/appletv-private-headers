/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject {
	NSString *_name;	// 4 = 0x4
	AVMediaSelectionOption *_option;	// 8 = 0x8
	BOOL _isSDH;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x35cbbdf9; 
@property(assign, nonatomic) BOOL isSDH;	// G=0x35cbc1f1; S=0x35cbc201; @synthesize=_isSDH
@property(readonly, assign, nonatomic) NSString *name;	// G=0x35cbc1d1; @synthesize=_name
@property(readonly, assign, nonatomic) AVMediaSelectionOption *option;	// G=0x35cbc1e1; @synthesize=_option
+ (id)copyOffTrack;	// 0x35cbbd1d
+ (id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;	// 0x35cbc0e1
- (id)initWithName:(id)name option:(id)option;	// 0x35cbbca5
- (id)_humanReadableLanguage;	// 0x35cbbfcd
- (int)compare:(id)compare;	// 0x35cbbf7d
- (void)dealloc;	// 0x35cbbd95
- (id)description;	// 0x35cbc071
// declared property getter: - (id)displayName;	// 0x35cbbdf9
// declared property getter: - (BOOL)isSDH;	// 0x35cbc1f1
// declared property getter: - (id)name;	// 0x35cbc1d1
// declared property getter: - (id)option;	// 0x35cbc1e1
// declared property setter: - (void)setIsSDH:(BOOL)sdh;	// 0x35cbc201
@end

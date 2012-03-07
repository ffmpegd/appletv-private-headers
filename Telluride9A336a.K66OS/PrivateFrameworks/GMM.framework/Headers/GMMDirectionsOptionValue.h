/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionValue : PBCodable {
	int _optionID;	// 4 = 0x4
	BOOL _hasValue;	// 8 = 0x8
	int _value;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasValue;	// G=0x3384f51d; S=0x3384f52d; @synthesize=_hasValue
@property(assign, nonatomic) int optionID;	// G=0x3384f4fd; S=0x3384f50d; @synthesize=_optionID
@property(assign, nonatomic) int value;	// G=0x3384f53d; S=0x3384f261; @synthesize=_value
- (void)dealloc;	// 0x3384f235
- (id)description;	// 0x3384f285
- (id)dictionaryRepresentation;	// 0x3384f2f5
// declared property getter: - (BOOL)hasValue;	// 0x3384f51d
// declared property getter: - (int)optionID;	// 0x3384f4fd
- (BOOL)readFrom:(id)from;	// 0x3384f3b1
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x3384f52d
// declared property setter: - (void)setOptionID:(int)anId;	// 0x3384f50d
// declared property setter: - (void)setValue:(int)value;	// 0x3384f261
// declared property getter: - (int)value;	// 0x3384f53d
- (void)writeTo:(id)to;	// 0x3384f4a5
@end


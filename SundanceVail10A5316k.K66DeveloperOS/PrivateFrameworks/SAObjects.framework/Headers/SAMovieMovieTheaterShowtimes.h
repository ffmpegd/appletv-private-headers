/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SALocalSearchBusiness2, NSArray;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *movieShowtimes;	// G=0x32f691f1; S=0x32f6926d; 
@property(copy, nonatomic) NSArray *showtimes;	// G=0x32f692d5; S=0x32f692f1; 
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;	// G=0x32f69341; S=0x32f69395; 
+ (id)movieTheaterShowtimes;	// 0x32f69161
+ (id)movieTheaterShowtimesWithDictionary:(id)dictionary context:(id)context;	// 0x32f691a5
- (id)encodedClassName;	// 0x32f69155
- (id)groupIdentifier;	// 0x32f69145
// declared property getter: - (id)movieShowtimes;	// 0x32f691f1
// declared property setter: - (void)setMovieShowtimes:(id)showtimes;	// 0x32f6926d
// declared property setter: - (void)setShowtimes:(id)showtimes;	// 0x32f692f1
// declared property setter: - (void)setTheater:(id)theater;	// 0x32f69395
// declared property getter: - (id)showtimes;	// 0x32f692d5
// declared property getter: - (id)theater;	// 0x32f69341
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"


@interface SAMovieResolution : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int height;	// G=0x353fcb95; S=0x353fcc05; 
@property(assign, nonatomic) int width;	// G=0x353fcc49; S=0x353fccb9; 
+ (id)resolution;	// 0x353fcb05
+ (id)resolutionWithDictionary:(id)dictionary context:(id)context;	// 0x353fcb49
- (id)encodedClassName;	// 0x353fcaf9
- (id)groupIdentifier;	// 0x353fcae9
// declared property getter: - (int)height;	// 0x353fcb95
// declared property setter: - (void)setHeight:(int)height;	// 0x353fcc05
// declared property setter: - (void)setWidth:(int)width;	// 0x353fccb9
// declared property getter: - (int)width;	// 0x353fcc49
@end


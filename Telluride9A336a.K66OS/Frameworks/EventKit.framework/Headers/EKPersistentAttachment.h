/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x313e92a5; S=0x313e92c1; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x313e93f9; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x313e9415; S=0x313e9465; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x313e9315; S=0x313e9331; 
@property(copy, nonatomic) NSString *fileName;	// G=0x313e92dd; S=0x313e92f9; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x313e93c1; S=0x313e93dd; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x313e934d; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x313e9389; S=0x313e93a5; 
+ (id)relations;	// 0x313e90ed
// declared property getter: - (id)URL;	// 0x313e92a5
// declared property getter: - (id)UUID;	// 0x313e93f9
// declared property getter: - (id)XProperties;	// 0x313e9415
- (id)copyWithZone:(NSZone *)zone;	// 0x313e917d
- (id)description;	// 0x313e94bd
// declared property getter: - (id)fileFormat;	// 0x313e9315
// declared property getter: - (id)fileName;	// 0x313e92dd
// declared property getter: - (id)fileSize;	// 0x313e93c1
// declared property getter: - (BOOL)isBinary;	// 0x313e934d
// declared property getter: - (id)localURL;	// 0x313e9389
// declared property setter: - (void)setFileFormat:(id)format;	// 0x313e9331
// declared property setter: - (void)setFileName:(id)name;	// 0x313e92f9
// declared property setter: - (void)setFileSize:(id)size;	// 0x313e93dd
- (void)setIsBinary:(BOOL)binary;	// 0x313e936d
// declared property setter: - (void)setLocalURL:(id)url;	// 0x313e93a5
// declared property setter: - (void)setURL:(id)url;	// 0x313e92c1
// declared property setter: - (void)setXProperties:(id)properties;	// 0x313e9465
@end


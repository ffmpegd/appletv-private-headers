/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAClientBoundCommand.h"
#import "SAAceSerializable.h"

@class NSString;

@protocol SASettingAppSettingCommand <SAAceSerializable, SAClientBoundCommand>
@property(copy, nonatomic) NSString *appWithSettingsId;
@property(copy, nonatomic) NSString *location;
// declared property getter: - (id)appWithSettingsId;
// declared property getter: - (id)location;
// declared property setter: - (void)setAppWithSettingsId:(id)settingsId;
// declared property setter: - (void)setLocation:(id)location;
@end


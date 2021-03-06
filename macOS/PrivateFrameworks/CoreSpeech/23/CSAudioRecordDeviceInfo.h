//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isRemoteDevice;
    NSString *_route;
    NSUUID *_remoteDeviceUID;
    NSString *_remoteDeviceProductIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) BOOL isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)xpcObject;
- (id)initWithXPCObject:(id)arg1;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;

@end


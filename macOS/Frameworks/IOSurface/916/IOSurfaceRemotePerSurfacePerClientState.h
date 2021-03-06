//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSurfaceRemotePerSurfaceGlobalState;

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject
{
    struct __IOSurfaceClient *_surface;
    unsigned int _refcount;
    IOSurfaceRemotePerSurfaceGlobalState *_globalState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IOSurfaceRemotePerSurfaceGlobalState *globalState; // @synthesize globalState=_globalState;
- (void)dealloc;
- (id)mergeExtraData:(id)arg1;
- (BOOL)removeClientReferenceToSurface;
- (void)addClientReferenceToSurfaceWithExtraData:(id)arg1;
@property(readonly, nonatomic) unsigned int debugRefCount;
@property(readonly, nonatomic) struct __IOSurfaceClient *surface;
- (id)initWithSurface:(struct __IOSurfaceClient *)arg1 mappedAddress:(void *)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;

@end



#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPreventScreenMirroringSpec.h"

@interface PreventScreenMirroring : NSObject <NativePreventScreenMirroringSpec>
#else
#import <React/RCTBridgeModule.h>

@interface PreventScreenMirroring : NSObject <RCTBridgeModule>
#endif

@end

import PureCppTurboModuleLibrary from './NativePureCppTurboModuleLibrary';

export function multiply(a: number, b: number): number {
  return PureCppTurboModuleLibrary.multiply(a, b);
}
